void fun()
{
  int entity_1 = 57;
  int entity_8 = 6;
  int entity_6 = 54;
  char entity_7[91] = "";
  entity_7 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(entity_8*sizeof(char));
  entity_3[entity_8-1]='';
  memset(entity_7, 'o', 91-1);
  entity_7[91-1]='';
  entity_8 = 6;
  memcpy(entity_3, entity_7, 91*sizeof(char));
}