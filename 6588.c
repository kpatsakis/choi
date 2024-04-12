void fun()
{
  int entity_2 = 33;
  entity_2 = 22;
  char entity_4 = 'S';
  char entity_7[entity_2] = "";
  entity_7 = NULL;
  char* entity_3;
  char entity_0 = 'D';
  entity_3 = (char*)malloc(88*sizeof(char));
  entity_3[88-1]='';
  memset(entity_7, 'c', entity_2-1);
  entity_7[entity_2-1]='';
  memcpy(entity_3, entity_7, entity_2*sizeof(char));
}