void fun()
{
  int entity_2 = 40;
  char entity_3[entity_2] = "";
  entity_3 = NULL;
  char* entity_0;
  memset(entity_3, 'K', entity_2-1);
  entity_3[entity_2-1]='';
  entity_0 = (char*)malloc(92*sizeof(char));
  entity_0[92-1]='';
  memcpy(entity_0, entity_3, entity_2*sizeof(char));
}