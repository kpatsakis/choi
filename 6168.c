void fun()
{
  int entity_8 = 45;
  entity_8 = 37;
  char entity_1[48] = "";
  entity_1 = NULL;
  char* entity_6;
  char entity_4[95] = "";
  entity_4 = NULL;
  entity_6 = (char*)malloc(entity_8*sizeof(char));
  entity_6[entity_8-1]='';
  memset(entity_1, 'u', 48-1);
  entity_1[48-1]='';
  memset(entity_4, 'r', 95-1);
  entity_4[95-1]='';
  memcpy(entity_6, entity_1, 48*sizeof(char));
}