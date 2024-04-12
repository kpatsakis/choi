void fun()
{
  int entity_1 = 94;
  char entity_3[entity_1] = "";
  entity_3 = NULL;
  char entity_6 = 'K';
  char* entity_2;
  entity_2 = (char*)malloc(36*sizeof(char));
  entity_2[36-1]='';
  memset(entity_3, 'H', entity_1-1);
  entity_3[entity_1-1]='';
  entity_1 = 47;
  memcpy(entity_2, entity_3, entity_1*sizeof(char));
}