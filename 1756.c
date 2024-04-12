void fun()
{
  char* entity_7;
  char entity_3[72] = "";
  entity_3 = NULL;
  char entity_6 = 't';
  entity_7 = (char*)malloc(24*sizeof(char));
  entity_7[24-1]='';
  memset(entity_3, 'D', 72-1);
  entity_3[72-1]='';
  memcpy(entity_7, entity_3, 72*sizeof(char));
}