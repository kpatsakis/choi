void fun()
{
  int entity_6 = 29;
  entity_6 = 30;
  char* entity_4;
  char entity_3[16] = "";
  entity_3 = NULL;
  char entity_8 = 'V';
  memset(entity_3, 'q', 16-1);
  entity_3[16-1]='';
  entity_4 = (char*)malloc(entity_6*sizeof(char));
  entity_4[entity_6-1]='';
  memcpy(entity_4, entity_3, 16*sizeof(char));
}