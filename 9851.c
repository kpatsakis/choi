void fun()
{
  int entity_7 = 72;
  char* entity_6;
  char entity_3[44] = "";
  entity_3 = NULL;
  char* entity_5;
  memset(entity_3, 'o', 44-1);
  entity_3[44-1]='';
  entity_5 = (char*)malloc(40*sizeof(char));
  entity_5[40-1]='';
  entity_6 = (char*)malloc(entity_7*sizeof(char));
  entity_6[entity_7-1]='';
  memcpy(entity_6, entity_3, 44*sizeof(char));
}