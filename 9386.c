void fun()
{
  int entity_3 = 69;
  char entity_6[95] = "";
  entity_6 = NULL;
  char* entity_5;
  char* entity_7;
  entity_5 = (char*)malloc(11*sizeof(char));
  entity_5[11-1]='';
  memset(entity_6, 'D', 95-1);
  entity_6[95-1]='';
  entity_7 = (char*)malloc(entity_3*sizeof(char));
  entity_7[entity_3-1]='';
  strcpy(entity_7, entity_6);
}