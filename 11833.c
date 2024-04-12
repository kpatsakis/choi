void fun()
{
  int entity_3 = 70;
  char entity_0[58] = "";
  char* entity_2;
  char* entity_6;
  memset(entity_0, 'b', 58-1);
  entity_0[58-1]='0';
  entity_6 = (char*)malloc(47*sizeof(char));
  entity_6[0]='0';
  entity_2 = (char*)malloc(97*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_2, entity_0, 58*sizeof(char));
}