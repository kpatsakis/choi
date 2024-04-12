void fun()
{
  int entity_9 = 14;
  int entity_6 = 76;
  entity_6 = 95;
  char* entity_3;
  char entity_7[entity_6] = "";
  entity_7 = NULL;
  entity_3 = (char*)malloc(90*sizeof(char));
  entity_3[90-1]='';
  memset(entity_7, 'z', entity_6-1);
  entity_7[entity_6-1]='';
  entity_7[51] = 'Z';
}