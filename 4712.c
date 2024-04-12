void fun()
{
  int entity_2 = 50;
  char* entity_7;
  char entity_9[entity_2] = "";
  entity_9 = NULL;
  memset(entity_9, 'Z', entity_2-1);
  entity_9[entity_2-1]='';
  entity_7 = (char*)malloc(68*sizeof(char));
  entity_7[68-1]='';
  entity_2 = 7;
  memcpy(entity_7, entity_9, entity_2*sizeof(char));
}