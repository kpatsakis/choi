void fun()
{
  int entity_4 = 66;
  char* entity_6;
  char* entity_1;
  char entity_3[entity_4] = "";
  entity_3 = NULL;
  char entity_2[13] = "";
  entity_2 = NULL;
  entity_6 = (char*)malloc(24*sizeof(char));
  entity_6[24-1]='';
  memset(entity_3, 'j', entity_4-1);
  entity_3[entity_4-1]='';
  entity_1 = (char*)malloc(74*sizeof(char));
  entity_1[74-1]='';
  memset(entity_2, 'f', 13-1);
  entity_2[13-1]='';
  strcpy(entity_6, entity_3);
}