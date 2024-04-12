void fun()
{
  int entity_1 = 45;
  int entity_8 = 87;
  char entity_3[entity_1] = "";
  entity_3 = NULL;
  char* entity_7;
  char* entity_5;
  entity_7 = (char*)malloc(53*sizeof(char));
  entity_7[53-1]='';
  memset(entity_3, 'Z', entity_1-1);
  entity_3[entity_1-1]='';
  entity_5 = (char*)malloc(13*sizeof(char));
  entity_5[13-1]='';
  entity_1 = 62;
  strcpy(entity_5, entity_3);
}