void fun()
{
  int entity_2 = 55;
  char* entity_6;
  char* entity_1;
  char entity_4[entity_2] = "";
  entity_4 = NULL;
  entity_1 = (char*)malloc(92*sizeof(char));
  entity_1[92-1]='';
  entity_6 = (char*)malloc(79*sizeof(char));
  entity_6[79-1]='';
  memset(entity_4, 'w', entity_2-1);
  entity_4[entity_2-1]='';
  strcpy(entity_6, entity_4);
}