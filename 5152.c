void fun()
{
  char entity_9[36] = "";
  entity_9 = NULL;
  char* entity_6;
  char entity_3[67] = "";
  entity_3 = NULL;
  char entity_7 = 't';
  memset(entity_9, 'Z', 36-1);
  entity_9[36-1]='';
  entity_6 = (char*)malloc(94*sizeof(char));
  entity_6[94-1]='';
  memset(entity_3, 'b', 67-1);
  entity_3[67-1]='';
  memcpy(entity_6, entity_3, 67*sizeof(char));
}