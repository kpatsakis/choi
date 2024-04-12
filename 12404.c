void fun()
{
  int entity_8 = 12;
  int entity_5 = 27;
  char entity_6[100] = "";
  char* entity_4;
  char* entity_2;
  entity_4 = (char*)malloc(entity_5*sizeof(char));
  entity_4[0]='0';
  entity_2 = (char*)malloc(60*sizeof(char));
  entity_2[0]='0';
  memset(entity_6, 'o', 100-1);
  entity_6[100-1]='0';
  memcpy(entity_4, entity_6, 100*sizeof(char));
}