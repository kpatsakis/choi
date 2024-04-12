void fun()
{
  int entity_7 = 82;
  entity_7 = 36;
  char* entity_5;
  char entity_6[87] = "";
  entity_6 = NULL;
  memset(entity_6, 'd', 87-1);
  entity_6[87-1]='';
  entity_5 = (char*)malloc(entity_7*sizeof(char));
  entity_5[entity_7-1]='';
  memcpy(entity_5, entity_6, 87*sizeof(char));
}