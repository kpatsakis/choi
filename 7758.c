void fun()
{
  int entity_8 = 3;
  char entity_2[68] = "";
  entity_2 = NULL;
  char* entity_9;
  memset(entity_2, 's', 68-1);
  entity_2[68-1]='';
  entity_9 = (char*)malloc(entity_8*sizeof(char));
  entity_9[entity_8-1]='';
  entity_8 = 9;
  memcpy(entity_9, entity_2, 68*sizeof(char));
}