void fun()
{
  int entity_3 = 62;
  char entity_7[47] = "";
  entity_7 = NULL;
  char* entity_9;
  memset(entity_7, 'a', 47-1);
  entity_7[47-1]='';
  entity_9 = (char*)malloc(79*sizeof(char));
  entity_9[79-1]='';
  entity_7[entity_3] = 'Y';
}