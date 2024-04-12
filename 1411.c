void fun()
{
  int entity_9 = 59;
  char* entity_4;
  char entity_7[59] = "";
  entity_7 = NULL;
  memset(entity_7, 'I', 59-1);
  entity_7[59-1]='';
  entity_4 = (char*)malloc(entity_9*sizeof(char));
  entity_4[entity_9-1]='';
  memcpy(entity_4, entity_7, 59*sizeof(char));
}