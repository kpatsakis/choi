void fun()
{
  int entity_8 = 30;
  entity_8 = 30;
  char entity_7 = 'q';
  char* entity_0;
  char entity_5[entity_8] = "";
  entity_5 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(95*sizeof(char));
  entity_2[95-1]='';
  entity_0 = (char*)malloc(16*sizeof(char));
  entity_0[16-1]='';
  memset(entity_5, 'j', entity_8-1);
  entity_5[entity_8-1]='';
  strcpy(entity_2, entity_5);
}