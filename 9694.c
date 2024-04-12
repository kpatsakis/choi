void fun()
{
  int entity_3 = 50;
  entity_3 = 34;
  char entity_4[18] = "";
  entity_4 = NULL;
  char entity_2[entity_3] = "";
  entity_2 = NULL;
  char* entity_9;
  char* entity_7;
  entity_9 = (char*)malloc(31*sizeof(char));
  entity_9[31-1]='';
  memset(entity_2, 'J', entity_3-1);
  entity_2[entity_3-1]='';
  memset(entity_4, 'X', 18-1);
  entity_4[18-1]='';
  entity_7 = (char*)malloc(66*sizeof(char));
  entity_7[66-1]='';
  entity_2[74] = 'g';
}