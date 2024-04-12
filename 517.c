void fun()
{
  int entity_3 = 90;
  char* entity_5;
  char entity_6[entity_3] = "";
  entity_6 = NULL;
  char* entity_8;
  memset(entity_6, 'D', entity_3-1);
  entity_6[entity_3-1]='';
  entity_8 = (char*)malloc(41*sizeof(char));
  entity_8[41-1]='';
  entity_5 = (char*)malloc(48*sizeof(char));
  entity_5[48-1]='';
  entity_3 = 47;
  memcpy(entity_5, entity_6, entity_3*sizeof(char));
}