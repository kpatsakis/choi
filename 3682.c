void fun()
{
  int entity_8 = 48;
  char entity_6[70] = "";
  entity_6 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(entity_8*sizeof(char));
  entity_1[entity_8-1]='';
  memset(entity_6, 'D', 70-1);
  entity_6[70-1]='';
  entity_8 = 21;
  memcpy(entity_1, entity_6, 70*sizeof(char));
}