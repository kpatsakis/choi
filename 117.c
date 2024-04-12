void fun()
{
  int entity_1 = 90;
  entity_1 = 39;
  char* entity_2;
  char entity_3[entity_1] = "";
  entity_3 = NULL;
  entity_2 = (char*)malloc(92*sizeof(char));
  entity_2[92-1]='';
  memset(entity_3, 'f', entity_1-1);
  entity_3[entity_1-1]='';
  memcpy(entity_2, entity_3, entity_1*sizeof(char));
}