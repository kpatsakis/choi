void fun()
{
  int entity_6 = 41;
  entity_6 = 80;
  char entity_7[18] = "";
  entity_7 = NULL;
  char* entity_1;
  char entity_3 = 'g';
  entity_1 = (char*)malloc(entity_6*sizeof(char));
  entity_1[entity_6-1]='';
  memset(entity_7, 'o', 18-1);
  entity_7[18-1]='';
  memcpy(entity_1, entity_7, 18*sizeof(char));
}