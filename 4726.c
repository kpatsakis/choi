void fun()
{
  int entity_6 = 36;
  char entity_2[96] = "";
  entity_2 = NULL;
  char entity_7[72] = "";
  entity_7 = NULL;
  char* entity_3;
  char entity_4 = 'S';
  entity_3 = (char*)malloc(entity_6*sizeof(char));
  entity_3[entity_6-1]='';
  memset(entity_7, 'k', 72-1);
  entity_7[72-1]='';
  memset(entity_2, 'f', 96-1);
  entity_2[96-1]='';
  memcpy(entity_3, entity_7, 72*sizeof(char));
}