void fun()
{
  int entity_4 = 47;
  char entity_0[14] = "";
  char* entity_1;
  char* entity_2;
  memset(entity_0, 'k', 14-1);
  entity_0[14-1]='0';
  entity_1 = (char*)malloc(94*sizeof(char));
  entity_1[0]='0';
  entity_2 = (char*)malloc(54*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_1, entity_0, 14*sizeof(char));
}