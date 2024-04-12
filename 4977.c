void fun()
{
  int entity_9 = 36;
  char entity_3[34] = "";
  entity_3 = NULL;
  char* entity_1;
  char* entity_7;
  entity_1 = (char*)malloc(30*sizeof(char));
  entity_1[30-1]='';
  memset(entity_3, 'f', 34-1);
  entity_3[34-1]='';
  entity_7 = (char*)malloc(entity_9*sizeof(char));
  entity_7[entity_9-1]='';
  memcpy(entity_7, entity_3, 34*sizeof(char));
}