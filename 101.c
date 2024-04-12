void fun()
{
  int entity_1 = 98;
  int entity_8 = 39;
  char entity_6[22] = "";
  entity_6 = NULL;
  char* entity_2;
  char entity_4[7] = "";
  entity_4 = NULL;
  memset(entity_6, 'j', 22-1);
  entity_6[22-1]='';
  memset(entity_4, 'N', 7-1);
  entity_4[7-1]='';
  entity_2 = (char*)malloc(entity_1*sizeof(char));
  entity_2[entity_1-1]='';
  strcpy(entity_2, entity_6);
}