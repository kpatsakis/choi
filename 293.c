void fun()
{
  char* entity_0;
  char entity_9 = 'P';
  char entity_7[30] = "";
  entity_7 = NULL;
  entity_0 = (char*)malloc(78*sizeof(char));
  entity_0[78-1]='';
  memset(entity_7, 'u', 30-1);
  entity_7[30-1]='';
  memcpy(entity_0, entity_7, 30*sizeof(char));
}