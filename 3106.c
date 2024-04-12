void fun()
{
  int entity_2 = 42;
  char* entity_9;
  char entity_3[79] = "";
  entity_3 = NULL;
  entity_9 = (char*)malloc(entity_2*sizeof(char));
  entity_9[entity_2-1]='';
  memset(entity_3, 'F', 79-1);
  entity_3[79-1]='';
  entity_2 = 90;
  memcpy(entity_9, entity_3, 79*sizeof(char));
}