void fun()
{
  int entity_8 = 89;
  char entity_7 = 'P';
  char* entity_9;
  char entity_5[88] = "";
  char entity_3[14] = "";
  entity_9 = (char*)malloc(entity_8*sizeof(char));
  entity_9[0]='0';
  memset(entity_3, 's', 14-1);
  entity_3[14-1]='0';
  memset(entity_5, 'I', 88-1);
  entity_5[88-1]='0';
  entity_8 = 39;
  strcpy(entity_9, entity_3);
}