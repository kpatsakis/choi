void fun()
{
  char* entity_6;
  char entity_7[6] = "";
  entity_7 = NULL;
  entity_6 = (char*)malloc(84*sizeof(char));
  entity_6[84-1]='';
  memset(entity_7, 'F', 6-1);
  entity_7[6-1]='';
  memcpy(entity_6, entity_7, 6*sizeof(char));
}