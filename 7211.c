void fun()
{
  int entity_2 = 65;
  entity_2 = 76;
  char* entity_7;
  char entity_4[entity_2] = "";
  entity_4 = NULL;
  memset(entity_4, 'g', entity_2-1);
  entity_4[entity_2-1]='';
  entity_7 = (char*)malloc(36*sizeof(char));
  entity_7[36-1]='';
  memcpy(entity_7, entity_4, entity_2*sizeof(char));
}