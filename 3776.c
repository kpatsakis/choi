void fun()
{
  int entity_3 = 29;
  int entity_4 = 82;
  char* entity_6;
  char* entity_7;
  char entity_5[entity_4] = "";
  entity_5 = NULL;
  entity_6 = (char*)malloc(40*sizeof(char));
  entity_6[40-1]='';
  entity_7 = (char*)malloc(13*sizeof(char));
  entity_7[13-1]='';
  memset(entity_5, 's', entity_4-1);
  entity_5[entity_4-1]='';
  entity_4 = 61;
  memcpy(entity_6, entity_5, entity_4*sizeof(char));
}