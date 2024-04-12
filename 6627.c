void fun()
{
  int entity_6 = 5;
  char* entity_1;
  char entity_8[87] = "";
  entity_8 = NULL;
  char entity_4 = 'c';
  memset(entity_8, 'w', 87-1);
  entity_8[87-1]='';
  entity_1 = (char*)malloc(entity_6*sizeof(char));
  entity_1[entity_6-1]='';
  memcpy(entity_1, entity_8, 87*sizeof(char));
}