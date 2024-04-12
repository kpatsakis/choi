void fun()
{
  int entity_6 = 72;
  char* entity_3;
  char entity_4[68] = "";
  entity_4 = NULL;
  memset(entity_4, 'w', 68-1);
  entity_4[68-1]='';
  entity_3 = (char*)malloc(entity_6*sizeof(char));
  entity_3[entity_6-1]='';
  entity_6 = 52;
  memcpy(entity_3, entity_4, 68*sizeof(char));
}