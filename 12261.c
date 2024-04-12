void fun()
{
  int entity_9 = 58;
  char entity_7[60] = "";
  char* entity_1;
  char* entity_0;
  char* entity_3;
  entity_0 = (char*)malloc(47*sizeof(char));
  entity_0[0]='0';
  entity_3 = (char*)malloc(entity_9*sizeof(char));
  entity_3[0]='0';
  memset(entity_7, 'b', 60-1);
  entity_7[60-1]='0';
  entity_1 = (char*)malloc(94*sizeof(char));
  entity_1[0]='0';
  memcpy(entity_3, entity_7, 60*sizeof(char));
}