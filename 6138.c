void fun()
{
  int entity_0 = 27;
  int entity_2 = 19;
  char entity_1[92] = "";
  entity_1 = NULL;
  char* entity_9;
  char entity_7[76] = "";
  entity_7 = NULL;
  entity_9 = (char*)malloc(95*sizeof(char));
  entity_9[95-1]='';
  memset(entity_1, 'N', 92-1);
  entity_1[92-1]='';
  memset(entity_7, 'h', 76-1);
  entity_7[76-1]='';
  entity_7[entity_2] = 'A';
}