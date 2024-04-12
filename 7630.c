void fun()
{
  int entity_1 = 27;
  int entity_0 = 5;
  char* entity_7;
  char entity_2[entity_1] = "";
  entity_2 = NULL;
  memset(entity_2, 'D', entity_1-1);
  entity_2[entity_1-1]='';
  entity_7 = (char*)malloc(43*sizeof(char));
  entity_7[43-1]='';
  entity_1 = 87;
  memcpy(entity_7, entity_2, entity_1*sizeof(char));
}