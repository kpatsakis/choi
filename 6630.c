void fun()
{
  int entity_5 = 60;
  char* entity_3;
  char entity_7[entity_5] = "";
  entity_7 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(74*sizeof(char));
  entity_6[74-1]='';
  memset(entity_7, 't', entity_5-1);
  entity_7[entity_5-1]='';
  entity_3 = (char*)malloc(13*sizeof(char));
  entity_3[13-1]='';
  strcpy(entity_6, entity_7);
}