void fun()
{
  int entity_9 = 75;
  char entity_7[79] = "";
  entity_7 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(5*sizeof(char));
  entity_5[5-1]='';
  memset(entity_7, 'm', 79-1);
  entity_7[79-1]='';
  memcpy(entity_5, entity_7, 79*sizeof(char));
}