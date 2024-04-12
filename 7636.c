void fun()
{
  int entity_6 = 41;
  char* entity_2;
  char entity_4 = 'q';
  char entity_9 = 'M';
  char entity_8[6] = "";
  entity_8 = NULL;
  char entity_1 = 'V';
  entity_2 = (char*)malloc(entity_6*sizeof(char));
  entity_2[entity_6-1]='';
  memset(entity_8, 'w', 6-1);
  entity_8[6-1]='';
  memcpy(entity_2, entity_8, 6*sizeof(char));
}