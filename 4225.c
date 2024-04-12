void fun()
{
  int entity_8 = 94;
  int entity_3 = 78;
  char entity_9[36] = "";
  entity_9 = NULL;
  char* entity_1;
  memset(entity_9, 'j', 36-1);
  entity_9[36-1]='';
  entity_1 = (char*)malloc(70*sizeof(char));
  entity_1[70-1]='';
  entity_9[entity_3] = 'f';
}