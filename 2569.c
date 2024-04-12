void fun()
{
  int entity_0 = 66;
  int entity_4 = 48;
  char entity_8[95] = "";
  entity_8 = NULL;
  char* entity_3;
  char* entity_7;
  char entity_6[entity_0] = "";
  entity_6 = NULL;
  entity_3 = (char*)malloc(98*sizeof(char));
  entity_3[98-1]='';
  memset(entity_8, 'w', 95-1);
  entity_8[95-1]='';
  memset(entity_6, 'j', entity_0-1);
  entity_6[entity_0-1]='';
  entity_7 = (char*)malloc(78*sizeof(char));
  entity_7[78-1]='';
  memcpy(entity_7, entity_6, entity_0*sizeof(char));
}