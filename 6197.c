void fun()
{
  char* entity_9;
  char entity_1[84] = "";
  entity_1 = NULL;
  entity_9 = (char*)malloc(79*sizeof(char));
  entity_9[79-1]='';
  memset(entity_1, 'r', 84-1);
  entity_1[84-1]='';
  memcpy(entity_9, entity_1, 84*sizeof(char));
}