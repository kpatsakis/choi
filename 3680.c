void fun()
{
  int entity_6 = 53;
  entity_6 = 95;
  char entity_7[25] = "";
  entity_7 = NULL;
  char* entity_3;
  memset(entity_7, 'Y', 25-1);
  entity_7[25-1]='';
  entity_3 = (char*)malloc(entity_6*sizeof(char));
  entity_3[entity_6-1]='';
  memcpy(entity_3, entity_7, 25*sizeof(char));
}