void fun()
{
  int entity_6 = 41;
  char entity_2[76] = "";
  entity_2 = NULL;
  char* entity_3;
  char entity_7[36] = "";
  entity_7 = NULL;
  char entity_8 = 'l';
  memset(entity_2, 'S', 76-1);
  entity_2[76-1]='';
  memset(entity_7, 'p', 36-1);
  entity_7[36-1]='';
  entity_3 = (char*)malloc(entity_6*sizeof(char));
  entity_3[entity_6-1]='';
  entity_6 = 65;
  memcpy(entity_3, entity_2, 76*sizeof(char));
}