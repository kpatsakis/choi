void fun()
{
  int entity_0 = 43;
  char entity_1[entity_0] = "";
  entity_1 = NULL;
  char* entity_7;
  char entity_2[82] = "";
  entity_2 = NULL;
  char* entity_5;
  entity_7 = (char*)malloc(92*sizeof(char));
  entity_7[92-1]='';
  memset(entity_2, 'L', 82-1);
  entity_2[82-1]='';
  entity_5 = (char*)malloc(32*sizeof(char));
  entity_5[32-1]='';
  memset(entity_1, 'o', entity_0-1);
  entity_1[entity_0-1]='';
  memcpy(entity_7, entity_1, entity_0*sizeof(char));
}