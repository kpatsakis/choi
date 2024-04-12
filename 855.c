void fun()
{
  int entity_2 = 20;
  char* entity_6;
  char entity_3[entity_2] = "";
  entity_3 = NULL;
  memset(entity_3, 'L', entity_2-1);
  entity_3[entity_2-1]='';
  entity_6 = (char*)malloc(92*sizeof(char));
  entity_6[92-1]='';
  memcpy(entity_6, entity_3, entity_2*sizeof(char));
}