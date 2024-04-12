void fun()
{
  int entity_9 = 60;
  char entity_3[87] = "";
  entity_3 = NULL;
  char* entity_4;
  memset(entity_3, 'K', 87-1);
  entity_3[87-1]='';
  entity_4 = (char*)malloc(entity_9*sizeof(char));
  entity_4[entity_9-1]='';
  entity_9 = 34;
  memcpy(entity_4, entity_3, 87*sizeof(char));
}