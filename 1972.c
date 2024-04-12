void fun()
{
  int entity_9 = 84;
  char entity_2[68] = "";
  entity_2 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(entity_9*sizeof(char));
  entity_3[entity_9-1]='';
  memset(entity_2, 'n', 68-1);
  entity_2[68-1]='';
  memcpy(entity_3, entity_2, 68*sizeof(char));
}